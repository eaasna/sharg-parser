#include <sharg/all.hpp>
#include <seqan3/core/debug_stream.hpp>
#include <seqan3/std/filesystem>

int main(int argc, const char ** argv)
{
    sharg::argument_parser myparser{"Test", argc, argv}; // initialize

    //! [validator_call]
    std::filesystem::path myfile{};

    myparser.add_option(myfile,'f',"file","The input file containing the sequences.",
                        sharg::option_spec::standard, sharg::input_file_validator{{"fa","fasta"}});
    //! [validator_call]

    // an exception will be thrown if the user specifies a filename
    // that does not have one of the extensions ["fa","fasta"] or if the file does not exist/is not readable.
    try
    {
        myparser.parse();
    }
    catch (sharg::argument_parser_error const & ext) // the user did something wrong
    {
        std::cerr << "[PARSER ERROR] " << ext.what() << "\n"; // customize your error message
        return -1;
    }

    seqan3::debug_stream << "filename given by user passed validation: " << myfile << "\n";
    return 0;
}
