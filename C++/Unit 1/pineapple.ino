

void longLED()
{
    digitalWrite(13, HIGH);
    delay(800);
    digitalWrite(13, LOW);
    delay(300);
}

void shortLED()
{
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(300);
}

void runLED(String morseArray[])
{
    for (int i = 0; i < 34; i++)
    {
        if (morseArray[i] == "-")
        {
            longLED();
        }
        if (morseArray[i] == ".")
            {
                shortLED();
            }
        if (morseArray[i] == "2")
        {
            delay(300);
        }
    }
}
/*
int *translate(String letter)
{
    static int arr[] = {};
    if (letter == "A")
    {
        int arr[] = {0, 1, 2};
        return arr;
    }
    if (letter == "B")
    {
        int arr[] = {1, 0, 0, 0, 2};
        return arr;
    }
    if (letter == "C")
    {
        int arr[] = {1, 0, 1, 0, 2};
        return arr;
    }
    if (letter == "D")
    {
        int arr[] = {1, 0, 0, 2};
        return arr;
    }
    if (letter == "E")
    {
        int arr[] = {0, 2};
        return arr;
    }
    if (letter == "F")
    {
        int arr[] = {0, 0, 1, 0, 2};
        return arr;
    }
    if (letter == "G")
    {
        int arr[] = {1, 1, 0, 2};
        return arr;
    }
    if (letter == "H")
    {
        int arr[] = {0, 0, 0, 0, 2};
        return arr;
    }
    if (letter == "I")
    {
        int arr[] = {0, 0, 2};
        return arr;
    }
    if (letter == "J")
    {
        int arr[] = {0, 1, 1, 1, 2};
        return arr;
    }
    if (letter == "K")
    {
        int arr[] = {1, 0, 1, 2};
        return arr;
    }
    if (letter == "L")
    {
        int arr[] = {0, 1, 0, 0, 2};
        return arr;
    }
    if (letter == "M")
    {
        int arr[] = {1, 1, 0, 2};
        return arr;
    }
    if (letter == "N")
    {
        int arr[] = {1, 0, 2};
        return arr;
    }
    if (letter == "O")
    {
        int arr[] = {1, 1, 1, 2};
        return arr;
    }
    if (letter == "P")
    {
        int arr[] = {0, 1, 1, 0, 2};
        return arr;
    }
    if (letter == "Q")
    {
        int arr[] = {1, 1, 0, 1, 2};
        return arr;
    }
    if (letter == "R")
    {
        int arr[] = {0, 1, 0, 2};
        return arr;
    }
    if (letter == "S")
    {
        int arr[] = {0, 0, 0, 2};
        return arr;
    }
    if (letter == "T")
    {
        int arr[] = {1, 2};
        return arr;
    }
    if (letter == "U")
    {
        int arr[] = {0, 0, 1, 2};
        return arr;
    }
    if (letter == "V")
    {
        int arr[] = {0, 0, 0, 1, 2};
        return arr;
    }
    if (letter == "W")
    {
        int arr[] = {0, 1, 1, 2};
        return arr;
    }
    if (letter == "X")
    {
        int arr[] = {1, 0, 0, 1, 2};
        //arr[0] = {1};
        return arr;
    }
    if (letter == "Y")
    {
        int arr[] = {1, 0, 1, 1, 2};
        return arr;
    }
    if (letter == "Z")
    {
        int arr[] = {1, 1, 0, 0, 2};
        return arr;
    }
}
*/
// 1 is a long LED and 0 is a short LED
// WORD IS pineapple
void setup()
{
    pinMode(13, OUTPUT);
    delay(1000);
    String morseArray[] = {
        ".", "-", "-", ".", "2",
        ".", ".", "2",
        "-", ".", "2",
        ".", "2",
        ".", "-", "2",
        ".", "-", "-", ".", "2",
        ".", "-", "-", ".", "2",
        ".", "-", ".", ".", "2",
        ".", "2", "2",

        ".", "-", "2",
        ".", ".", ".", "2", "2",

        "-", ".", "2",
        "-", "-", "-", "2"
        };
    runLED(morseArray);
    exit;
    exit;
}
void loop()
{
    
}