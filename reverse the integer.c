int reversDigits(int number)
{
    int rev_number=0;
    while(number>0)
    {
        rev_number=rev_number*10+number%10;
        number=number/10;
    }
    return rev_number;
}
int main()
{
    int number=4562;
    printf("Reverse of no. is %d", reversDigits(number));
    getchar();
    return 0;
}
