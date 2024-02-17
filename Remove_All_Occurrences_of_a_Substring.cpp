class Solution {
public:
    void removeOCCUR(string &s,string &part){
        int found = s.find(part);
        if(found != string::npos){
            // part mil gya
            // remove krdo
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(),s.size());
            s = left_part + right_part;

            removeOCCUR(s,part);
        }
    }

    string removeOccurrences(string s, string part) {
    removeOCCUR(s,part);
    return s;

    }
};

// class Solution {
// public:        
//         while(s.find(part) != string::npos){
//             s.erase(s.find(part),part.length());
//         }
//         return s;


//     }
// };