// ----------------------------------------------------------------------------------
// File: homework_3.cpp
// Description: A program that demonstrates the usage of classes and objects in C++.
// Author: Gokberk Gultekin
// Date: March 19, 2025
// ----------------------------------------------------------------------------------

#include <iostream>
#include <string>

class Park {
    private:
        double m_width, m_depth, m_cleanCount;
        int m_smallTrees, m_bigTrees;
    public:
        // Constructor
        Park(double t_width, double t_depth, int t_smallTrees, int t_bigTrees, double t_cleanCount)
            : m_width(t_width), m_depth(t_depth), m_smallTrees(t_smallTrees), m_bigTrees(t_bigTrees), m_cleanCount(t_cleanCount) {}

        // Function to get the usable park size
        double getUsableSize() {
            double total_area = m_width * m_depth;
            double tree_diff = (m_smallTrees * 0.75) + (m_bigTrees * 1.2);
            return total_area - tree_diff;
        }
        
        // Function to get the quality of the park
        std::string getQuality() {
            double usable_size = getUsableSize();
            int total_trees = m_smallTrees + m_bigTrees;
            
            // Handle zero tree case for assignment
            if (total_trees == 0) {
                return "bad";
            }

            double ratio = usable_size / total_trees;

            if (m_cleanCount < 2.0 && ratio > 20.0) {
                return "bad";
            } else if (m_cleanCount >= 2.0 && ratio > 20.0) {
                return "poor";
            } else if (m_cleanCount >= 2.0 && ratio <= 20.0) {
                return "fine";
            } else {
                return "good";
            }
        }
};

int main() {
    double w1, d1, c1, w2, d2, c2;
    int s1, b1, s2, b2;

    // Get the user input for the parks
    std::cin >> w1 >> d1 >> s1 >> b1 >> c1;
    std::cin >> w2 >> d2 >> s2 >> b2 >> c2;

    // Create the park objects
    Park park1(w1, d1, s1, b1, c1);
    Park park2(w2, d2, s2, b2, c2);

    double total_usable_size = park1.getUsableSize() + park2.getUsableSize();

    // Get the worst quality of the two parks as the overall park quality
    std::string overall_park_quality = std::min(park1.getQuality(), park2.getQuality());

    std::cout << total_usable_size << " " <<overall_park_quality << std::endl;

    return 0;
}
