class Program
{   
    
    static void Main()
    {
        Console.Write("Zadej desetinne cislo: ");
        double vstup = double.Parse(Console.ReadLine());
        
        double zaokrouhli = Math.Round(vstup, 1);


        bool vyrok = false;
        while (vyrok)
        {
            Console.Write('a');
        }

        Console.WriteLine($"nacetl jsem: {vstup}");
        Console.WriteLine($"Zaokrouhlil jsem na: {zaokrouhli}");
    }
}