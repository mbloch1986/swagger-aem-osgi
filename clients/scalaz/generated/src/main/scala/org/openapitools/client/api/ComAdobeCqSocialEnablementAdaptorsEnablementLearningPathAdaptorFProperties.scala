package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties._

case class ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties (
  isMemberCheck: Option[ConfigNodePropertyBoolean])

object ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFPropertiesCodecJson: CodecJson[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties] = CodecJson.derive[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFPropertiesDecoder: EntityDecoder[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties] = jsonOf[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFPropertiesEncoder: EntityEncoder[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties] = jsonEncoderOf[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties]
}
