//
//  ViewController.swift
//  testMP
//
//  Created by iOS Developer on 09/08/2018.
//  Copyright © 2018 Vity Mobi Systems. All rights reserved.
//

import UIKit
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
		
		Events.sendEvent("buttonTappedEvent", forStringValue: "\(Date().dayOfWeek() ?? "")")
	}
	
	override func didReceiveMemoryWarning() {
		super.didReceiveMemoryWarning()
		// Dispose of any resources that can be recreated.
	}


}

extension Date {
	func dayOfWeek() -> String? {
		let dateFormatter = DateFormatter()
		dateFormatter.dateFormat = "EEEE"
		return dateFormatter.string(from: self).capitalized
		// or use capitalized(with: locale) if you want
	}
}
