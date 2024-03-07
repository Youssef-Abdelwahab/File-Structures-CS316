#include <string>

class GradeBook {
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName() const;
    void displayMassege() const;

private:
    std::string courseName;
};
