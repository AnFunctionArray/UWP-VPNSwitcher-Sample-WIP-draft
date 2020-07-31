# UWP-VPNSwitcher-Sample

For the `InitiateStorage` the idea is to be able to change the current server without first deleting and creating a new profile (and also without the API changing any settings on the Profile).

The above functions directly operates on the `rasphone.pbk` which is located in %localappdata%\Packages then the package identifier which can be obtained from the console output in VS then \LocalState.

The "SET0" is normally the result of the connection operation - if it's 1 you are screwed (0 is success). Check your event viewer in Windows Logs\Applications for Source:RasClient and diagnose.

And also as I've mentioned in the beginning of the source code - you first need to change a specific `#if 0` to `#if 1` in order to set up the VPN profile and Vault entry with the password.

It's possible to do that dynamically - but I'm leaving this to you to figure out.

Oh and another thing - the test VPN I'm using requires a preshared key L2TP so after creating the profile you need to go to settings and manually select (L2TP with preshared key) and set it to `superfreevpn.com`.

I don't think there is an automated option for the above. There is an option to set preshared key authentication for both the user and the tunnel but it doesn't seem to be an option to set said key.
