def get_data():
    data = [
        {"name": "北京", "total": 92, "double_first": 31, "first_uni": 8, "first_sub": 23},
        {"name": "上海", "total": 63, "double_first": 13, "first_uni": 4, "first_sub": 9},
        {"name": "广东", "total": 154, "double_first": 5, "first_uni": 2, "first_sub": 3},
        {"name": "天津", "total": 56, "double_first": 5, "first_uni": 2, "first_sub": 3},
        {"name": "四川", "total": 132, "double_first": 8, "first_uni": 2, "first_sub": 6},
        {"name": "山东", "total": 152, "double_first": 3, "first_uni": 2, "first_sub": 1},
        {"name": "浙江", "total": 109, "double_first": 3, "first_uni": 1, "first_sub": 2},
        {"name": "福建", "total": 89, "double_first": 2, "first_uni": 1, "first_sub": 1},
        {"name": "江苏", "total": 167, "double_first": 15, "first_uni": 2, "first_sub": 13},
        {"name": "河南", "total": 151, "double_first": 2, "first_uni": 1, "first_sub": 1},
        {"name": "贵州", "total": 75, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "新疆", "total": 56, "double_first": 2, "first_uni": 1, "first_sub": 1},
        {"name": "云南", "total": 82, "double_first": 1, "first_uni": 1, "first_sub": 0},
        {"name": "安徽", "total": 120, "double_first": 3, "first_uni": 1, "first_sub": 2},
        {"name": "广西", "total": 82, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "重庆", "total": 68, "double_first": 2, "first_uni": 1, "first_sub": 1},
        {"name": "河北", "total": 125, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "湖南", "total": 128, "double_first": 3, "first_uni": 2, "first_sub": 1},
        {"name": "陕西", "total": 96, "double_first": 7, "first_uni": 3, "first_sub": 4},
        {"name": "内蒙古", "total": 54, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "湖北", "total": 129, "double_first": 7, "first_uni": 2, "first_sub": 5},
        {"name": "江西", "total": 105, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "山西", "total": 85, "double_first": 1, "first_uni": 0, "first_sub": 1},
        {"name": "辽宁", "total": 116, "double_first": 4, "first_uni": 2, "first_sub": 2},
        {"name": "黑龙江", "total": 80, "double_first": 4, "first_uni": 1, "first_sub": 3},
        {"name": "吉林", "total": 64, "double_first": 3, "first_uni": 1, "first_sub": 2},
        {"name": "海南", "total": 21, "double_first": 1, "first_uni": 0, "first_sub": 1}
    ]
    return data


def task_1_query(data):
    target = input("\n请输入要查询的省份名称: ").strip()
    found = False
    for item in data:
        if item["name"] == target:
            print(f"{item['name']}大学数量: {item['total']}, "
                  f"双一流高校建设数量: {item['double_first']}, "
                  f"一流大学建设高校数量: {item['first_uni']}, "
                  f"一流学科建设高校数量: {item['first_sub']}")
            found = True
            break
    
    if not found:
        print(f"未找到关于 '{target}' 的数据。")


def task_2_sort(data):
    # 按双一流降序(-x)，若相同则按一流大学降序(-y)
    sorted_data = sorted(data, key=lambda x: (-x['double_first'], -x['first_uni']))
    
    print("\n--- 排序结果 (双一流数量降序) ---")
    print(f"{'省份':<6} {'总数':<6} {'双一流':<8} {'一流大学':<8} {'一流学科'}")
    for item in sorted_data:
        print(f"{item['name']:<6} {item['total']:<6} {item['double_first']:<8} {item['first_uni']:<8} {item['first_sub']}")


def task_3_statistics(data):
    total_double_first = sum(item['double_first'] for item in data)
    total_first_uni = sum(item['first_uni'] for item in data)
    
    print("\n--- 统计结果 ---")
    print(f"中国双一流建设高校总数量: {total_double_first}")
    print(f"中国一流大学建设高校总数量: {total_first_uni}")


if __name__ == "__main__":
    all_data = get_data()
    task_1_query(all_data)
    task_2_sort(all_data)
    task_3_statistics(all_data)