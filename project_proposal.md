## CS 225 Data Structures

## Final Project Proposal (ericzc2-srzhu3-sgrover4-ztg2)

1. **Leading Question**: Figure out the maximum activity occurring on a single user id during the discovery of a new particle on Twitter. The measures of activity are retweeting, replying, or mentions. We would display each tweet as a node with the ones with the most activity having the biggest node. 
 
2. **Dataset Acquisition and Processing**: We plan to use the [Higgs Twitter Dataset](http://snap.stanford.edu/data/higgs-twitter.html) from the Stanford Large Network Dataset Collection. We will focus on looking at the user id and the activity that occurs on that user id, specifically the data on retweeting, replying, or mentions. The data is in *.edgelist or *.txt  format but in order to make it uniform we will make all the files *.txt. Then we will use this [StackOverflow](https://stackoverflow.com/questions/195323/what-is-the-most-elegant-way-to-read-a-text-file-with-c) reference to read in the text files. For our graph structure, we will make it so that the nodes represent user IDs while edges represent activity between users. We will assign a number to each user ID node which is based on how many edges it contains. We understand that the data is large and any errors in the data, or data that we are unable to render, will be dropped in an effective manner to preserve the main essence of showing the biggest tweets with activity. graph structure. 
 
3. **Graph Algorithms**: We plan to use a Depth First Search (DFS) algorithm to traverse through our data. The expected input would be the initial nodes that are considered to be the "origin/initial" tweets, and the expected output would be an iterator that traverses down one path of the graph to an "endpoint" (the last interaction on a path), before traversing back and repeating for each path. The expected time complexity of the DFS algorithm is O(n+m), where n is the number of nodes and m is the number of paths. The first algorithm we plan to use is PageRank to find the most important tweets. The expected input would be the dataset, as the number of nodes that are pointing to the tweet and the number of paths exiting each of those nodes are needed. The expected output would be a pagerank value associated with the target tweet. The time complexity of the pagerank algorithm is also O(n+m). The second algorithm we plan to use is the Force-directed Graph Drawing algorithm to visualize the dataset. We will represent each tweet as a node and each interaction as an arc. The larger the pagerank of the node, the larger the node would physically look. The expected inputs would be the list of user IDs and their corresponding pageranks. The expected output would be the graph visualization.
 
4. **Timeline**

   April 9 - Submit project proposal and team contract

   April 16 - Create node class and read in data, test for correctness

   April 23 - Create markov chain transition matrix from graph nodes, test on smaller dataset

   April 30 - Apply PageRank to find the most important sources and calculate other metrics such as users reached by each major source

   May 7 - Create visualizations using force-directed graph drawing algorithms and verify with tests

   May 12 - Finish editing presentation and submit
