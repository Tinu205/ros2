import rclpy
from rclpy.node import Node 

from std_msgs.msg import String 

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subsciber')
        self.subscription = self.create_subscription(String,'topic',self.listener_callback,10)
        self.subscription
    def listener_callback(self,msg):
        print(f"I heard: {msg.data}")
def main(args=None):
    rclpy.init(args=args)
    minimal_subsciber = MinimalSubscriber()
    rclpy.spin(minimal_subsciber)
    minimal_subsciber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

