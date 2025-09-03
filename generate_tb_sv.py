import sys
import os 
import re

def parsing_sv_module (file_content):
    #Fine the module name
    '''
        ^ begin of the line
        \s* amount of white space after module
        module name of module

    '''
    module_match = re.search(r'^\s*module\s+(\w+)', file_content, re.MULTILINE)
    module_name = module_match.group(1)
    port_block = re.search(r'\((.*?)\);', file_content, re.DOTALL)
    port_declaratios = port_block.group(1)

    #Now we focus on finding input/output ports
    port_regex = re.compile(
        r'(?P<direction>input|output|inout)\s+'  # Capture 'input' or 'output'
        r'(?P<type>logic|reg|wire|bit)?\s*'       # Optionally capture the type (like logic, reg)
        r'(?P<width>\[[^\]]+\])?\s*'              # Optionally capture the width (like [7:0])
        r'(?P<name>\w+)'                         # Capture the port's name
    )

    inputs = []
    outputs = []

    for match in port_regex.finditer(port_declaratios):
        data_type = match.group('type') if match.group('type') else 'logic'
        width = match.group('width') if match.group('width') else '' #empty
        full_type = f"{data_type} {width}".strip()

        #Dictionary for getting name and type
        port_info = {
            'name': match.group('name'),
            'type': full_type
        }

        if match.group('direction') == 'input':
            inputs.append(port_info)
        elif match.group('direction') == 'output':
            outputs.append(port_info)

    return module_name, inputs, outputs



def main():
    #Run the main file, need to check the argument
    directory_path = "rtl/"
    if len(sys.argv) != 2:
        print("Error: need to get 1 argument only")
        sys.exit(1)
    verilog_file = sys.argv[1]

    path_file = os.path.join(directory_path, f"{verilog_file}.sv")

    try:
        with open(path_file, 'r') as file_handle:
            file_content = file_handle.read()
        print(f"Success! {file_content} was read\n")
    except IOError as e:
        print(f"Error: Could not read the file. Reason: {e}")
        sys.exit(1)
    

if __name__ == "__main__":
    main()