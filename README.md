![Screenshot 1](https://github.com/Chaizedesu/RC-Going-Unreal/blob/main/Media/Intro%20Poster.png)

# Ratchet & Clank: Going Unreal

Ratchet & Clank: Going Unreal is a Fan game/Framework made inside of Unreal Engine 4. It's still pretty much in an early state but due to popular demand and other plans i've decided to make it open source. This framework is intended to be a replication (Keep in mind i said Replication and not duplication so things might be a little different for multiple reasons) of Ratchet's core movement mechanic from Going Commando. You'll be able to do things like, customize the code to your liking (If you're experienced with Unreal), create your own levels, make new weapons etc... Endless possibilities. 

Keep in mind there's a lack of UI as i don't like to work with UI but now that it's open source you guys can make your own ;). 



## Installation

To be able to open and use the framework you're going to need Unreal Engine 4.27 and some plugins.

 The Plugins being:

-NinjaCharacter

-DynamicGravityCharacter

-PythonScriptPlugin

-EditorScriptingUtilities

-AutoSizeComments

-CPathfinding

-FlatNodes

-LiveBlueprintDebugger

-RecentBlueprintMenu



 Most of the plugins are not even being used and there might be a couple of plugins that i missed but it will tell you when you try to Open the Project.

 
## Usage

Assuming that you have everything Installed you just Double Click I5.exe. (More documentation will come. chill)

### Set up project to run on Android:

#### Setup 

1. Install [Android Studio](https://developer.android.com/studio/install)
2. Use Android Studio to Install the following and note the installation paths! (After some testing only these Versions seem to work with UE 4.27):
- SDK Platforms (API Level 29 and API Level 21)
- Android SDK Command-line tools (latest)
- CMake
- Android SDK Platform-Tools (I've used 35.0.1, also  rename d8.jar and d8.bat files to dx.jar and d8.bat in in ...SDK\build-tools\YOUR_VERSION and ...SDK\build-tools\YOUR_VERSION\lib)
- Java 8 (temurin-1.8)
3. Download the [NDK](https://github.com/android/ndk/wiki/Unsupported-Downloads) in Version 21 and unzip it somewhere. Note the path.
4. Open the project in UE and go to Edit -> Project Settings
5. On the left panel scrol down to Platforms, there perform steps 1, 3, 4 from this [quickstart](https://docs.unrealengine.com/4.27/en-US/SharingAndReleasing/Mobile/Android/GettingStarted/)
6. Then go to to the Platforms-> Android SDK section of the left panel. Configure the SDKConfig so that the SDK, NDK, Java location from the steps above are used. For SDK API Level enter "match NDK" and for NDK Api Level use "android-21".
7. Follow the steps 5 or 6 from the [quickstart](https://docs.unrealengine.com/4.27/en-US/SharingAndReleasing/Mobile/Android/GettingStarted/)

You may encounter problems when you have special characters or whitespaces in your directories, so just avoid them.

## Features

- **Feature 1**: Ratchet's Moveset and Abilities .
- **Feature 2**: Ratchet's Weapon Arsenal.
- **Feature 3**: Ratchet's Camera System (Somewhat).
- **Feature 4**: The ability to change the Source code i guess.

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

If you want your own Version and receive updates of the Framework you just need to Fork the project then Sync Fork when there's an updated Version.

## License

Distributed under the MIT License. See `LICENSE` for more information.

## Contact

Come through the Discord, we chilling: [https://discord.gg/dfwFaGM88Y](https://discord.gg/dfwFaGM88Y)
