class Program
{
    static void Main()
    {
        Student borivoj = new Student("Borivoj", 67, "IT69");

        Console.WriteLine("jmeno: " + borivoj.Jmeno);

        borivoj.PridatZnamku(6);
        borivoj.PridatZnamku(7);

        borivoj.VypisZnamky();

        Student patrik = new Student("Patrik", 15, "IT-1A");
    }
}
