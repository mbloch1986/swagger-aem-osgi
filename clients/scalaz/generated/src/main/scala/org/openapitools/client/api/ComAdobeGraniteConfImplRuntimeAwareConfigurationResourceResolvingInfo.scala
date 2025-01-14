package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo._

case class ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties])

object ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfoCodecJson: CodecJson[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo] = CodecJson.derive[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo]
  implicit val ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfoDecoder: EntityDecoder[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo] = jsonOf[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo]
  implicit val ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfoEncoder: EntityEncoder[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo] = jsonEncoderOf[ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingInfo]
}
