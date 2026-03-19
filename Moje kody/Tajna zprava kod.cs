class Program
{
    static void Main()
    {

        Console.WriteLine("Zadej login: ");
        string login = Console.ReadLine();

        if (login == "Petr")
        {
            Console.WriteLine("Zadej heslo: ");
            string heslo = Console.ReadLine();

            if (heslo == "DobreJanac!")
            {
                Console.WriteLine("Honím si nad sebou každý den před zrcadlem - Janáč");
            } else {
                Console.WriteLine("Spatne heslo!");
            }
        } else {
            Console.WriteLine("Spatny login!: ");
        }



         
    }
}