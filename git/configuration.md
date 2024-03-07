# Configuration

### Issue1 : GitHub keeps prompting me to choose an account on VS code

- logged in once with my old github account on vs code to check old repositories, and vs code started to keep prompting me to choose an account between old / new one
- issue wasn't solved even after logging out from the old account

### Solution:

- `git config --global --unset-all credential.helper` : worked! 🎉

- Detail
  - ` git config <scope> <option> <name> <value>`
  - scope: --global / --local / --system
  - option
    - --unset-all : remove all lines matching the key from config file.

<br>
<br>

[Reference]

- https://stackoverflow.com/questions/76709372/github-keeps-prompting-me-to-choose-an-account
- https://git-scm.com/docs/git-config - git config document (en)
- https://techexpertise.medium.com/storing-git-credentials-with-git-credential-helper-33d22a6b5ce7 - credential helper (en)
