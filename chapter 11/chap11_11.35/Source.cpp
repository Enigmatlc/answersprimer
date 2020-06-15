//Exercise 11.35: In buildMap, what effect, if any, would there be from
//rewriting
//trans_map[key] = value.substr(1); replaces the old value with this value substring
//as trans_map.insert({ key, value.substr(1) }) ? it will not update value if a string already exist with that key otherwise it will insert the value.