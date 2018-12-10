
#ifndef PROJECT_UTILS_H
#define PROJECT_UTILS_H

bool startsWithCaseInsensitive(std::string mainStr, const std::string &toMatch)
{
    // Convert mainStr to lower case
    std::transform(mainStr.begin(), mainStr.end(), mainStr.begin(), ::tolower);

    return mainStr.find(toMatch) == 0;
}

#endif //PROJECT_UTILS_H
