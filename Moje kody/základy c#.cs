class Program
{
    static void Main()
    {
        int x = 0;

        while(x == 0)
        {
            Console.WriteLine("Zadej cislo: ");
            int a = int.Parse(Console.ReadLine());

            if (a <= 0)
            {
                Console.WriteLine("Cislo je mensi jak nula");
            }
            else
            {
                Console.WriteLine("Cislo je vetsi jak nula");
            }

            if (a % 5 == 0)
            {
                Console.WriteLine("Cislo je delitelne peti");
                x = 1;
            }
        }
    }
}