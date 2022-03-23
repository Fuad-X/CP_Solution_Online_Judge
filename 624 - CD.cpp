#include <iostream>

using namespace std;

int main()
{
    int size, arr[1000000], ans, lim, sum_ans, sum;
    while(cin >> size)
    {
        int arr_size;
        cin >> arr_size;
        for(int i=0; i<arr_size; i++) cin >> arr[i];
        lim = (1<<arr_size);
        ans = 0, sum_ans = 0, sum;
        
        for(int mask = 0; mask < lim; mask++)
        {
            sum = 0;
            for(int i=0; i<arr_size; i++)
            {
                if(mask & (1<<i))
                {
                    sum+=arr[i];
                }
            }
            if(sum > sum_ans && sum <= size)
            {
                ans = mask;
                sum_ans = sum;
            }
            else if(sum == sum_ans)
            {
                if(__builtin_popcount(mask) > __builtin_popcount(ans)) ans = mask;
            }
        }
        
        for(int i=0; i<arr_size; i++)
        {
            if(ans & (1<<i))
            {
                cout << arr[i] << " ";
            }
        }
        cout << "sum:" << sum_ans << endl;
    }
   return 0;
}
