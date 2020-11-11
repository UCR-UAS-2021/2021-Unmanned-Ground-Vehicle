# GitHub Training

1. Clone this repository
2. Create a new folder titled with your GitHub name in the **training** folder
3. Create a new branch in the following format: **<GitHub name>/training**
4. In your GitHub folder, create a `.cpp` file with your GitHub name as the file name
5. Push the branch onto the repository
6. Include in the `.cpp` file code that will match the following criteria:
    - The code should take in the angle of rotation from 0 degrees.
    - The code should also store the current time of the day in Hours, Minutes, and Seconds
    - The code should then call a `RotVehicle()` function that will rotate the vehicle x degrees back to 0 degrees.
        - You should also create a `CalcRotTime()` function that will calculate the time in *ms* that the vehicle will rotate for.
            - Every 0.5 degrees rotated will take approximately *750ms*.
            - The code should be the most optimized time, i.e. take the least amount of time to rotate the vehicle
    - Once the rotation has been completed, output "Done. Rot Degree: [total degrees of rotation to return vehicle to 0 degrees] ~ Start hr:min:sec | End hr:min:sec"
7. Push this `.cpp` file onto the repo and create a **Pull Request** to merge your branch to the main
    - assign Stephen Dong (PikaSannnnn) as a reviewer
    - Do not put a tag
8. Check back after a while to see if the pull request has been closed. If not, comments may have been given to either fix or adjust the code.
9. Once your pull request has been closed, look for a new pull request titled <Your GitHub name> - GitHub Training Completion.
10. Click on it, review, and accept the merge.