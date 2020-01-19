#include <gazebo/gazebo.hh>

namespace gazebo
{
	class MakeMyWorldPlugin : public WorldPlugin

	{
		public: MakeMyWorldPlugin() : WorldPlugin()
		{
			printf("Welcome to Robin's world!\n");
		}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}

	};

	GZ_REGISTER_WORLD_PLUGIN(MakeMyWorldPlugin)

}
