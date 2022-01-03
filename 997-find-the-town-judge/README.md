<h2><a href="https://leetcode.com/problems/find-the-town-judge/">997. Find the town judge</a></h2><h3>Easy</h3><hr><div><p>In a town, there are <code>n</code> people labeled from  <code>1</code> to <code>n</code> . There is a rumor that one of <br> these people is secretly the town judge.<br> If the town judge exists, then:
<ul>
    <li>The town judge trusts nobody. </li>
    <li>Everybody (except for the town judge) trusts the town judge.</li>
    <li>There is exactly one person that satisfies properties 1 and 2.</li>
</ul> 
You are given an array trust where <code>trust[i] = [ai, bi]</code> representing that the person labeled <code>ai</code> trusts the person labeled <code>bi</code>
 </p>

<pre>Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.
</pre>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 2, trust = [[1,2]]
<strong>Output:</strong>2
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 3, trust = [[1,3],[2,3]]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 3, trust = [[1,3],[2,3],[3,1]]
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 1000</code></li>
  <li><code>0 &lt;= trust.length &lt;= 10^4</code></li>
  <li><code>trust[i].length == 2</code></li>
  <li><code>All the pairs of trust are unique.</code></li>
  <li><code>ai != bi</code></li>
  <li><code>1 &lt;= ai, bi  &lt;= n</code></li>
</ul>
</div>
