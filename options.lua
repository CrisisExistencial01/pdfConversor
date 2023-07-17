opts = {"-h", "--help", "-S", "-ct-mobi", "--convert-to-mobi"}

function ShowHelp()
    print("options:\n")
    print("\t-h, --help            show this help message and exit\n")
    print("\t-S                    Muestra un saludo amigable\n")
end

function exec(option)
    if option == "-h" or option == "--help" then
        ShowHelp()
    end
end

