# 🎮 Rope Untangle 3D

A production-ready Unity 3D hyper-casual game template featuring rope puzzle mechanics, built with clean architecture and industry-standard practices.

![Unity](https://img.shields.io/badge/Unity-6000.0.x-black?style=flat-square&logo=unity)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)
![Platform](https://img.shields.io/badge/Platform-Mobile%20%7C%20PC-blue?style=flat-square)

## Overview

Rope Untangle 3D is a minimalist puzzle game where players untangle ropes by dragging pins in the correct sequence. This project serves as a comprehensive template for hyper-casual game development, implementing modern Unity practices and scalable architecture.

### Core Gameplay
- Drag pins to move ropes
- Untangle all ropes without crossing
- Complete increasingly challenging levels
- Simple mechanics, challenging puzzles

## Key Features

### Architecture & Design Patterns
- **SOLID Principles**: Clean, maintainable, and extensible codebase
- **Event-Driven Architecture**: Decoupled systems via Event Channels
- **Object Pooling**: Optimized memory management
- **Service Locator Pattern**: Centralized service access
- **State Machine**: Robust game state management
- **Dependency Injection**: Flexible component composition

### Performance & Optimization
- **Addressables System**: Dynamic asset loading and memory management
- **UniTask Integration**: Allocation-free async operations
- **Object Pool System**: Runtime allocation optimization
- **URP Pipeline**: Optimized rendering for mobile platforms
- **LOD System**: Distance-based quality adjustment
- **Batch Rendering**: Reduced draw calls

### Technical Features
- **PlayFab Backend**: Cloud save, leaderboards, analytics
- **Modular UI System**: Reusable, scalable UI components
- **Level Editor**: Easy level creation and management
- **Audio Manager**: Efficient sound management with pooling
- **Analytics Integration**: Event tracking and user behavior analysis
- **Save System**: Persistent player data

### Platform Support
- iOS & Android (Primary)

## Technology Stack

| Category | Technology |
|----------|-----------|
| **Engine** | Unity 6000.2.7f2 |
| **Rendering** | Universal Render Pipeline (URP) |
| **Async Operations** | UniTask |
| **Asset Management** | Addressables |
| **Backend** | PlayFab |
| **IDE** | JetBrains Rider |
| **Version Control** | Git & GitHub |

## Project Structure
```
Assets/
├── _Project/
│   ├── Scripts/
│   │   ├── Core/
│   │   │   ├── Managers/              # Game lifecycle managers
│   │   │   ├── EventChannels/         # ScriptableObject-based events
│   │   │   ├── Interfaces/            # Contract definitions
│   │   │   └── Extensions/            # Utility extensions
│   │   ├── Gameplay/
│   │   │   ├── Rope/                  # Rope physics & rendering
│   │   │   ├── Pin/                   # Pin interaction system
│   │   │   ├── Level/                 # Level management
│   │   │   └── Input/                 # Touch & mouse input
│   │   ├── UI/
│   │   │   ├── Screens/               # Main menu, game screen
│   │   │   ├── Components/            # Reusable UI elements
│   │   │   └── Popups/                # Dialogs & notifications
│   │   ├── Data/
│   │   │   ├── ScriptableObjects/     # Game configurations
│   │   │   └── Configs/               # Level data & settings
│   │   └── Services/
│   │       ├── PlayFab/               # Backend integration
│   │       ├── Audio/                 # Sound management
│   │       └── Analytics/             # Event tracking
│   ├── Prefabs/                       # Game object templates
│   ├── Scenes/                        # Scene files
│   ├── Materials/                     # Shaders & materials
│   ├── Addressables/                  # Addressable assets
│   └── Resources/                     # Direct-load assets
└── Plugins/
    ├── UniTask/                       # Async library
    └── PlayFab/                       # Backend SDK
```

## Getting Started

### Prerequisites
- Unity 6000.2.7f2 or higher
- Git installed
- JetBrains Rider (recommended) or Visual Studio
- PlayFab account (optional, for backend features)

### Installation

1. **Clone the repository**
```bash
git clone https://github.com/KomanMehmet/TangleMaster-Clone.git
cd rope-untangle-3d
```

2. **Open in Unity Hub**
   - Add project via Unity Hub
   - Open with Unity 6000.2.7f2

3. **Install Required Packages**

Open Package Manager (Window → Package Manager) and install:

**UniTask** (via Git URL):
```
https://github.com/Cysharp/UniTask.git?path=src/UniTask/Assets/Plugins/UniTask
```

**Addressables**:
- Search "Addressables" in Package Manager
- Install latest version

**PlayFab SDK**:
- Download from (https://github.com/PlayFab/UnitySDK)
- Or install via Package Manager


4. **Open Bootstrap Scene**
   - Navigate to `Assets/_Project/Scenes/`
   - Open `Bootstrap.unity`
   - Press Play

## Development Workflow

### Branch Strategy
```
main            # Production-ready code
├── develop     # Active development
└── feature/*   # Individual features
```

### Code Standards
- Follow SOLID principles
- Use XML documentation
- Write self-documenting code
- Keep methods under 20 lines
- One class per file
- Use meaningful names

### Commit Convention
```
feat:     New feature
fix:      Bug fix
docs:     Documentation changes
style:    Formatting, no code change
refactor: Code restructuring
perf:     Performance improvement
test:     Adding tests
chore:    Build tasks, etc.
```

## Performance Targets

| Metric | Target | Achieved |
|--------|--------|----------|
| **FPS** | 60 | ✅ |
| **Draw Calls** | <50 | ✅ |
| **Memory Usage** | <200MB | ✅ |
| **Build Size** | <50MB | ✅ |
| **Load Time** | <3s | ✅ |

## Asset Guidelines

### Naming Convention
```
PascalCase for assets:
- Prefabs: PP_RopePiece, PP_Pin
- Materials: MAT_Rope, MAT_Pin
- Textures: TEX_Background, TEX_Icon
- Scripts: RopeController.cs (C# convention)
```

### Optimization Rules
- Texture Max Size: 1024x1024
- Compress textures for mobile
- Use atlases for UI sprites
- LOD for 3D models
- Audio: MP3 for music, WAV for SFX

## Testing
```bash
# Run tests in Unity
Window → General → Test Runner
```

**Test Coverage Goals:**
- Core Systems: >80%
- Gameplay Logic: >70%
- UI Components: >60%

## Build Configuration

### Android
```
Minimum API Level: 24 (Android 7.0)
Target API Level: 36 (Android 16.0)
Architecture: ARM64
Scripting Backend: IL2CPP
```

## Configuration

### Game Settings
Edit `Assets/_Project/Data/Configs/GameConfig.asset`

### Level Design
Create levels via: `Assets/_Project/Data/ScriptableObjects/Levels/`

## Roadmap

### Current Features
- ✅ Core rope mechanics
- ✅ Pin interaction system
- ✅ Level management
- ✅ UI framework
- ✅ Event system
- ✅ Object pooling
- ✅ Addressables integration

### Upcoming Features
- 🔄 Advanced level editor
- 🔄 Hint system
- 🔄 Multiple rope types
- 🔄 Power-ups
- 🔄 Daily challenges
- 🔄 Skin system
- 🔄 Haptic feedback

## Contributing

This is a template project. Feel free to fork and adapt for your own needs.

### Adding New Features
1. Create feature branch: `git checkout -b feature/your-feature`
2. Follow code standards
3. Test thoroughly
4. Update documentation
5. Submit pull request


## Known Issues

Check [Issues] https://github.com/KomanMehmet/TangleMaster-Clone for current bugs and feature requests.


## Acknowledgments

- **Unity Technologies** - Game engine
- **Cysharp** - UniTask library
- **Microsoft PlayFab** - Backend services
- **JetBrains** - Rider IDE

## Contact

**Developer:** Mehmet Koman  
**GitHub:** [@KomanMehmet](https://github.com/KomanMehmet/TangleMaster-Clone)  
**LinkedIn:** https://www.linkedin.com/in/mehmet-koman-gamedev92/  
**Email:** mehmet.koman.92@gmail.com

---

<div align="center">

**Built with ❤️ using Unity**

⭐ Star this repo if you find it useful!

</div>