import json
import os
with open("实验17/IncomesData.json", "r", encoding="utf-8") as f:
    data = json.load(f)

print(data)
print("json file size:",os.path.getsize("实验17\IncomesData.json"))