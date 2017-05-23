    try
    {

        Server s;
        long long R = s.compute(A,B);
        cout << R << endl;
    }
    catch(bad_alloc&){ cout << "Not enough memory" << endl; }
    catch(exception &e){ cout << "Exception: " << e.what() << endl; }
    catch(...){ cout << "Other Exception" << endl; }