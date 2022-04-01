namespace ConditionalIf {
    class Program {         
        static void Main(string[] args) {
            int x = 102114 / 2564;
            int y = 1018362 * 102;
            switch (x)
            {
                case 39:
                    System.Console.WriteLine(1024/256);
                    System.Console.WriteLine("X - T");
                    System.Console.WriteLine(x);
                    break;
                default:
                    System.Console.WriteLine(1024*256);
                    System.Console.WriteLine("X - F");
                    System.Console.WriteLine(x);
                    break;
            }
            switch (y)
            {
                case 9:
                    System.Console.WriteLine(1024/256);
                    System.Console.WriteLine("Y - T");
                    System.Console.WriteLine(y);
                    break;
                default:
                    System.Console.WriteLine(1024*256);
                    System.Console.WriteLine("Y - F");
                    System.Console.WriteLine(y);
                    break;
            }
        }
    }
}