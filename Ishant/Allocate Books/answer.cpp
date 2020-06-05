int Solution::books(vector<int> &A, int B) {
    int ans;
    int n = A.size();
    if(n<B)
        return -1;
    int s=0, e=0;
    int total_pages=0;
    for(int i=0; i<n; i++)
    {
        total_pages += A[i];
        s = max(s, A[i]);
    }
    e = total_pages;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        int student=1, current_pages=0, count=0;
        for(int i=0; i<n; i++)
        {
            if(current_pages + A[i] > mid)
            {
                current_pages = A[i];
                student++;
                if(student > B)
                {
                    count++;
                    break;
                }
            }
            else
                current_pages += A[i];
        }
        if(count==0)
        {
            ans = mid;
            e = mid-1;
        }
        else
            s = mid+1;
    }
    return ans;
}