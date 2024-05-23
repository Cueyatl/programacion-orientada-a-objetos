void find(string productSearched, bool onDisplay, function<void(string, int, int)> func) {
    int i = 0;
    bool found = false;

    while (i < inventario.size() && !found) {
        string currentName = inventario[i].getName();
        if (currentName == productSearched) {
            found = true;
            if (!onDisplay) {
                cout << endl << currentName << " ENCONTRADO EN EL INDICE " << i << endl;
            } else {
                cout << "Producto: " << endl;
                showProduct(i);
                int comodin;
                // Aquí se ejecuta la función extra.
                func(currentName, i, comodin);
            }
            cout << "\n";
        }
        i++;
    }

    if (!found) {
        cout << productSearched << " NO ENCONTRADO" << endl;
        cout << "\n";
    }
}
