class Solution {
public:
    int maximumSwap(int num) {
        string x = to_string(num);
        int sz = x.size();
        vector<int>gri(sz,0);
        for(int i=sz-1;i>=0;i--){
            if(i==sz-1) {gri[i] = (x[i]-'0'); continue;}
            gri[i] = max(gri[i+1], (x[i]-'0'));
        }
        int right=0;
        for(int i=0;i<sz;i++){
            bool flag = false;
            if(gri[i]>(x[i]-'0')){
                for(int j=sz-1;j>i;j--){
                    if((x[j]-'0')==gri[i]){swap(x[i],x[j]); flag= true; break;}
                }
            }
            if(flag == true) break;
        }
        return stoi(x);
    }
};