package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo._

case class ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplProperties])

object ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfoCodecJson: CodecJson[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo] = CodecJson.derive[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo]
  implicit val ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfoDecoder: EntityDecoder[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo] = jsonOf[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo]
  implicit val ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfoEncoder: EntityEncoder[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo] = jsonEncoderOf[ComAdobeGraniteSocialgraphImplSocialGraphFactoryImplInfo]
}
