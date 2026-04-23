public class Student
{
    public string Jmeno { get; set; }
    public int Vek { get; set; }
    public string Trida { get; set; }
    private List<int> Znamky;

    public Student(string jmeno, int vek, string trida)
    {
        Jmeno = jmeno;
        Vek = vek;
        Trida = trida;
        Znamky = new List<int>();
    }

    public void PridatZnamku(int NovaZnamka)
    {
        Znamky.Add(NovaZnamka);
    }

    public void VypisZnamky()
    {
        Console.WriteLine("Znamky studenta: ");
        foreach (int z in Znamky)
        {
            Console.WriteLine("" + z);
        }
    }
}
