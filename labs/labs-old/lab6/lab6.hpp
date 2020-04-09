void lab6_v4_task2_do_while() {
    double a = 2, b = 3, h = 0.2, x = a;
    do {
        if (x != a + 2 * h)
            cout << "f(" << x << ") = e^x^2 / 2 = " << exp( pow(x, 2) ) / 2 << endl;
        else
            cout << "Provided x = a + 2 * h the function does not count the result";
        x = x + h;
    } while (x <= b);
}

void lab6_v4_task2_while() {
    double a = 2, b = 3, h = 0.2, x = a;
    while(x <= b) {
        if (x != a + 2 * h)
            cout << "f(" << x << ") = e^x^2 = " << exp( pow(x, 2) ) / 2 << endl;
        else
            cout << "Provided x = a + 2 * h the function does not count the result";
        x = x + h;
    }
}

void lab6_v4_task2_do_while_infinity() {
    double a = 2, h = 0.2, x = a;
    do {
        if (x != a + 2 * h)
            cout << "f(" << x << ") = " << exp( pow(x, 2) ) / 2 << endl;
        else
            cout << "Provided x = a + 2 * h the function does not count the result";
        x = x + h;
    } while (1);
}

void lab6_v5_task1_while() {
    double x;
    cout << "x = "; cin >> x;
    while (x != 0) {
        if (x < 0)
            cout << "Input negative number" << endl
            << "|" << x << "| = " << fabs(x) << endl << endl;
        else
            cout << "Input positive number" << endl << endl;
        cout << "x = "; cin >> x;
    }
    cout << "Input 0" << endl << endl;
}

void lab6_v5_task1_do_while() {
    double x;
    do {
        cout << "x = "; cin >> x;
        if (x < 0)
            cout << "Input negative number" << endl
            << "|" << x << "| = " << fabs(x) << endl << endl;
        else
            cout << "Input positive number" << endl << endl;
    } while (x != 0);
    cout << "Input 0" << endl << endl;
}

void lab6_v5_task1_for() {
    double x;
    for (int i = 0; i <= 1; i = 0) {
        cout << "x = "; cin >> x;
        if (x < 0)
            cout << "Input negative number" << endl
            << "|" << x << "| = " << fabs(x) << endl << endl;
        else if (x > 0)
            cout << "Input positive number" << endl << endl;
        else
            break;
    }
    cout << "Input 0" << endl << endl;
}
