package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo._

case class ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplProperties])

object ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfoCodecJson: CodecJson[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo] = CodecJson.derive[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo]
  implicit val ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfoDecoder: EntityDecoder[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo] = jsonOf[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo]
  implicit val ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfoEncoder: EntityEncoder[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo] = jsonEncoderOf[ComDayCqDamScene7ImplScene7FlashTemplatesServiceImplInfo]
}