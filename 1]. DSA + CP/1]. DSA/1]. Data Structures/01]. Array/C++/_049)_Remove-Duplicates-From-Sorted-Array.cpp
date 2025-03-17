 int removeDuplicates(vector<int>& nums) {    
        int k = 0,n = nums.size();
        
        for(int i=0;i<n;i++){
            int j = i;            
            while(j<n and nums[i]==nums[j]){
                j++;
            }
            nums[k++] = nums[i];
            i = j -1;
        }
        return k;
    }
int main()
{
    vector<int> v = {10, 20, 20, 30, 30, 30, 30};
    int n=7;
    cout<<"Before Removal Duplicates: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout<<endl<<"Size = "<<n<<endl;

    int Res = removeDuplicates(v);
    cout<<"After Removal Duplicates: ";
    for (int i = 0; i < Res; i++)
        cout << v[i] << " ";
    cout<<endl<<"Size = "<<Res<<endl;
}
