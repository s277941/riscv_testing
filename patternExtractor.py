import re
import os

profile_file = "./run/report_profile.txt"

file_profile = open(profile_file, "r")
Lines = file_profile.readlines()
for line in Lines:
  match = re.search(r'^\s+(\d+)', line)
  if match:
    n_pattern = match.group(1)
    n_real_pattern = str(int(n_pattern) -2)
    os.system("python3 autoTracer.py run/autoTrace.txt "+ n_real_pattern)
