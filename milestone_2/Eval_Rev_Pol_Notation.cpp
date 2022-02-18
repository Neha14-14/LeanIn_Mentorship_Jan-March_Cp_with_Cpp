class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
        string op = "+-*/"; 
        if (tokens.size()==0){return 0;}
        for (int i = 0; i<tokens.size();i++){
            string tok = tokens[i];
            int o =op.find(tok); 
            if (o!=-1){
                if (st.size()<2){return -1;}
                else{
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    if (o==0){st.push(b+a);} 
                    if (o==1){st.push(b-a);}
                    if (o==2){st.push(b*a);}
                    if (o==3){st.push(b/a);}
                }
            }else{
                st.push(atoi(tok.c_str()));
            }
        }
        return st.top(); 
    }
};
