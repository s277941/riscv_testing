import re
import sys

file1 = open('run/trace_core_00_0.log', 'r') 
Lines = file1.readlines() 

# Pattern to extract the code:
out_file_name = sys.argv[1]
pattern_number = sys.argv[2]

# Output file:
file_out = open(out_file_name, 'a') 
  
# Strips the newline character 
count = 0
for line in Lines: 

    line_splitted = re.split("\s+",line.strip())

    if( line_splitted[0] == pattern_number ):
      #print("Line{}: {}".format(count,line_splitted )) 

      match = re.search(r'(.+)x\d+=', line.strip()) 
      if match:

        tmp = match.group(1)
        line_splitted = re.split("\s+", tmp)
        line_splitted[0] = ""
        line_splitted[1] = ""
        new = " ".join(line_splitted) 
        instr = new.strip()

        match = re.search(r'(.+),\s+0x(.+)', instr)
        if match:
          instr =  match.group(1) + ", " + match.group(2)

        match = re.search(r'.+x\d+=.+?(x.+)', line.strip()) 
        if match:
          arr_li = re.split("\s+", match.group(1))
          for li in arr_li:
            match = re.search(r'(.+):(.+)', li)
            if match:
              reg = match.group(1)
              value = "0x" + match.group(2)
            file_out.write("li " + reg + ", " + value + ";\\\n")
       
        file_out.write(instr+ ";\\\n")

        match = re.search(r'(x\d+)', instr)
        if match:
          regD = match.group(1)
          file_out.write("sw " + regD +", 4(x31);\\\n")
      
      else:
        print("Cannot automate this pattern!!")

