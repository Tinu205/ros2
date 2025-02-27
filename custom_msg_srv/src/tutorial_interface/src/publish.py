import rclpy 
from rclpy.node import Node 

from tutorial_interface.msg import Num

class MinimalPubliser(Node):
    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher = self.create_publisher(Num,'topic',10)
        period = 0.5
        self.timer = self.create_timer(period,self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = Num()
        msg.Num = self.i
        self.publisher.publish(msg)
        print(f"publishing {msg}")
        self.i+=1

def main(args = None):
    rclpy.init()
    minimal_publisher = MinimalPubliser()

    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
