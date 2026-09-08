class Program
{
    static void Main()
    {
        const int KOD = 1234;
        int pokusy = 5;

        while(pokusy > 0)
        {
            Console.WriteLine("Zadej KOD do trezoru: ");
            int heslo = int.Parse(Console.ReadLine());


            if (heslo == KOD)
                {
                    Console.WriteLine("Trezor je otevřen!");
                    break;
                } else
                {
                    pokusy--;
                }
            
        }
        
    }
}
