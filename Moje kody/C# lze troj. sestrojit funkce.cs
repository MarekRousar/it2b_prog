class Program
{

    static bool Trojuhelnik(int a, int b, int c)
    {
        
        if (a + b > c && a + c > b && c + b > a)
        {
            Console.WriteLine("Trojuhelnik lze sestrojit");
            return true;  
        }
        else
        {
            Console.WriteLine("Trojuhelnik nelze sestrojit");
            return false;  
        }
    }

    static void Main()
    {
        Console.Write("Zadej 1. stranu (a): ");
        int a = int.Parse(Console.ReadLine());

        Console.Write("Zadej 2. stranu (b): ");
        int b = int.Parse(Console.ReadLine());

        Console.Write("Zadej 3. stranu (c): ");
        int c = int.Parse(Console.ReadLine());

        Console.WriteLine($"{Trojuhelnik(a, b, c)}");
    }
}