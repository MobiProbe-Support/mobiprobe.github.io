# MobiProbe




## Installation

To get started, add the MobiProbe SDK framework files to your project. For most projects, the easiest way to do that is by adding the MobiProbe CocoaPods, but, if your project can't support CocoaPods, you can also add the files manually.

To install it, simply add the following line to your Podfile:

```ruby

pod 'MobiProbe'

```

Then, `cd` into the directory containing your `podfile` and run `pod install`

## Usage



```swift 
import MobiProbe
class AppDelegate: UIResponder, UIApplicationDelegate {

	func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: 	[UIApplicationLaunchOptionsKey: Any]?) -> Bool {
		Events.activate("Your_App_ID")
		return true
	}
}


import MobiProbe
class ViewController: UIViewController {

	override func viewDidLoad() {
		super.viewDidLoad()
	}
	@IBAction func actionCrash(_ sender: UIButton) {
		let viewController = self.storyboard?.instantiateViewController(withIdentifier: "ssdf")
		self.present(viewController!, animated: true, completion: nil)
	}
	
	@IBAction func actionSendEvent(_ sender: UIButton) {
		Events.sendEvent("buttonTappedEvent", forStringValue: "I'm tapped")
	}

	override func didReceiveMemoryWarning() {
			super.didReceiveMemoryWarning()
			// Dispose of any resources that can be recreated.
	}


}

```



See example for a working implementation of this.


## Contributions

If you're interested in contributing to **MobiProbe**, please fork the repository and submit a pull request. All contributions are welcome and encouraged! :)

For all bug reports, feature requests, etc. please submit an issue to the repository.

## License

MobiProbe is available under the MIT license. See the LICENSE file for more info.
