class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> a;

        for (string &op : operations) 
        {
            if (op == "+") 
            {
                int s = a[a.size() - 1] + a[a.size() - 2];
                a.push_back(s);
            } 
            else if (op == "D") 
            {
                a.push_back(a.back() * 2);
            } 
            else if (op == "C") 
            {
                a.pop_back();
            } 
            else 
            {
                a.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int v : a) sum += v;
        return sum;
    }
};
