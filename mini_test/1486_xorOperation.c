int xorOperation(int n, int start) 
{
    int nums[n],result;
    for (int i = 0;i < n;i++)
    {
        nums[i] = start + 2 * i;
    }
        
    if (n > 1)
    {
        int result = nums[0] ^ nums[1];
        for (int i = 2;i < n;i++)
        {
            result = result ^ nums[i];
            
        }
    
    }

    else if (n == 1)
    {
        result = start;
    }
    return result;
}