#define CHK_SHOW_VERSION(argc, argv)                  \
    if (argc == 2 && strcasecmp(argv[1], "-v") == 0)  \
        do {                                          \
            showVersion(argv[1][1] == 'V');           \
            exit(0);                                  \
    } while (0)
