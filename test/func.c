#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name;
    int start;
    int finish;
}
Activity;

void selectActivities(Activity* activities, int numActivities, char chosenActivity)
{
    Activity* sortedActivities = malloc(numActivities * sizeof(Activity));
    memcpy(sortedActivities, activities, numActivities * sizeof(Activity));

    // Sort activities based on finish time using insertion sort
    for (int i = 1; i < numActivities; i++)
	{
        Activity key = sortedActivities[i];
        int j = i - 1;
        while (j >= 0 && sortedActivities[j].finish > key.finish)
		{
            sortedActivities[j + 1] = sortedActivities[j];
            j--;
        }
        sortedActivities[j + 1] = key;
    }

    Activity* selectedActivities = malloc(numActivities * sizeof(Activity));
    int numSelected = 0;

    // Find the chosen activity
    int chosenIndex = -1;
    for (int i = 0; i < numActivities; i++)
	{
        if (sortedActivities[i].name == chosenActivity)
		{
            chosenIndex = i;
            break;
        }
    }

    // Add activities that are compatible with the chosen activity
    if (chosenIndex != -1)
	{
        selectedActivities[numSelected] = sortedActivities[chosenIndex];
        numSelected++;

        for (int i = chosenIndex + 1; i < numActivities; i++)
		{
            if (sortedActivities[i].start >= selectedActivities[numSelected - 1].finish)
			{
                selectedActivities[numSelected] = sortedActivities[i];
                numSelected++;
            }
        }
    }

    printf("Maximum number of activities selected = %d, Selected Activity Set (s):
	{", numSelected);
    for (int i = 0; i < numSelected; i++)
	{
        printf("%c", selectedActivities[i].name);
        if (i != numSelected - 1)
		{
            printf(", ");
        }
    }
    printf("}\n");

    free(sortedActivities);
    free(selectedActivities);
}

int main()
{
    int numActivities;
    printf("Enter the maximum number of activities: ");
    scanf("%d", &numActivities);
    getchar();  // Consume the newline character

    Activity* activities = malloc(numActivities * sizeof(Activity));
    for (int i = 0; i < numActivities; i++) 
	{
        printf("Enter the name of the activity with its start and finish time: ");
        scanf(" (%c, %d, %d)", &activities[i].name, &activities[i].start, &activities[i].finish);
        getchar();  // Consume the newline character
    }

    char chosenActivity;
    printf("Enter the name of the activity of the person's choice: ");
    scanf(" %c", &chosenActivity);

    selectActivities(activities, numActivities, chosenActivity);

    free(activities);

    return 0;
}

