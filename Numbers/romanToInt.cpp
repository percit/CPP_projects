//https://leetcode.com/problems/roman-to-integer/submissions/
int romanToInt(const std::string& data) {
    int value = 0;
    int i = 0;
    for (i; i < data.size(); ++i) {
        switch (data.at(i)) {
            case 'M':
                value += 1000;
                break;
            case 'D':
                value += 500;
                break;
            case 'C':
                if((i+1) < data.size()) {
                    if ((data.at(i + 1) == 'D' || data.at(i + 1) == 'M')) {
                        value -= 100;
                    }
                    else {
                        value += 1;
                    }
                }else {
                    value += 100;
                }
                break;
            case 'L':
                value += 50;
                break;
            case 'X':
                if((i+1) < data.size()) {
                    if (data.at(i + 1) == 'L' || data.at(i + 1) == 'C') {
                        value -= 10;
                    }
                    else {
                        value += 1;
                    }
                }else {
                    value += 10;
                }
                break;
            case 'V':
                value += 5;
                break;
            case 'I':
                if((i+1) < data.size()) {
                    if (data.at(i + 1) == 'V' || data.at(i + 1) == 'X') {
                        value -= 1;
                    } else {
                        value += 1;
                    }
                }else{
                    value +=1;
                }
                break;
            default:
                break;
        }
    }

    return value;
}
