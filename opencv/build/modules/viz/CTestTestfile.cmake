# CMake generated Testfile for 
# Source directory: /home/bluecar/opencvFolder/opencv/modules/viz
# Build directory: /home/bluecar/opencvFolder/opencv/build/modules/viz
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_viz "/home/bluecar/opencvFolder/opencv/build/bin/opencv_test_viz" "--gtest_output=xml:opencv_test_viz.xml")
set_tests_properties(opencv_test_viz PROPERTIES  LABELS "Main;opencv_viz;Accuracy" WORKING_DIRECTORY "/home/bluecar/opencvFolder/opencv/build/test-reports/accuracy")
