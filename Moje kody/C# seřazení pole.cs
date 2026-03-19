class Program
{
    static void Main()
    {
        int[] pole = {16, 50, 6, 46, 99, 699, 67, 24, 200, -58};

        Array.Sort(pole);

        for(int i = 0; i < pole.Length; i++)
        {
            Console.WriteLine(pole[i]);
        }
    }
}